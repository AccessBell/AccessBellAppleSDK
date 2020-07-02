

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "AccessbellMeetConferenceOptions.h"
#import "AccessbellMeetViewDelegate.h"

@interface AccessbellMeetView : UIView

@property (nonatomic, nullable, weak) id<AccessbellMeetViewDelegate> delegate;

/**
 * Joins the conference specified by the given options. The gievn options will
 * be merged with the defaultConferenceOptions (if set) in AccessbellMeet. If there
 * is an already active conference it will be automatically left prior to
 * joining the new one.
 */
- (void)join:(AccessbellMeetConferenceOptions *_Nullable)options;
/**
 * Leaves the currently active conference.
 */
- (void)leave;

@end
