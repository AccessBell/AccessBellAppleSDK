
@protocol AccessbellMeetViewDelegate <NSObject>

@optional

/**
 * Called when a conference was joined.
 *
 * The `data` dictionary contains a `url` key with the conference URL.
 */
- (void)conferenceJoined:(NSDictionary *)data;

/**
 * Called when the active conference ends, be it because of user choice or
 * because of a failure.
 *
 * The `data` dictionary contains an `error` key with the error and a `url` key
 * with the conference URL. If the conference finished gracefully no `error`
 * key will be present. The possible values for "error" are described here:
 * https://github.com/accessbell/lib-accessbell-meet/blob/master/AccessbellConnectionErrors.js
 * https://github.com/accessbell/lib-accessbell-meet/blob/master/AccessbellConferenceErrors.js
 */
- (void)conferenceTerminated:(NSDictionary *)data;

/**
 * Called before a conference is joined.
 *
 * The `data` dictionary contains a `url` key with the conference URL.
 */
- (void)conferenceWillJoin:(NSDictionary *)data;

/**
 * Called when entering Picture-in-Picture is requested by the user. The app
 * should now activate its Picture-in-Picture implementation (and resize the
 * associated `AccessbellMeetView`. The latter will automatically detect its new size
 * and adjust its user interface to a variant appropriate for the small size
 * ordinarily associated with Picture-in-Picture.)
 *
 * The `data` dictionary is empty.
 */
- (void)enterPictureInPicture:(NSDictionary *)data;

@end
