
#import <Foundation/Foundation.h>

@interface AccessbellMeetUserInfo : NSObject

/**
 * User display name.
 */
@property (nonatomic, copy, nullable) NSString *displayName;
/**
 * User e-mail.
 */
@property (nonatomic, copy, nullable) NSString *email;
/**
 * URL for the user avatar.
 */
@property (nonatomic, copy, nullable) NSURL *avatar;

- (instancetype _Nullable)initWithDisplayName:(NSString *_Nullable)displayName
                                     andEmail:(NSString *_Nullable)email
                                    andAvatar:(NSURL *_Nullable) avatar;

@end
