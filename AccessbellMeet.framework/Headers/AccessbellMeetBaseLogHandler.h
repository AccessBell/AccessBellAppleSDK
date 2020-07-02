#import <Foundation/Foundation.h>

@interface AccessbellMeetBaseLogHandler : NSObject

// These are "abstract".
- (void)logVerbose:(NSString *)msg;
- (void)logDebug:(NSString *)msg;
- (void)logInfo:(NSString *)msg;
- (void)logWarn:(NSString *)msg;
- (void)logError:(NSString *)msg;

@end
