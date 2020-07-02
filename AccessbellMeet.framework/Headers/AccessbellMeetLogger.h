

#import <Foundation/Foundation.h>

#import "AccessbellMeetBaseLogHandler.h"


@interface AccessbellMeetLogger : NSObject

+ (void)addHandler:(AccessbellMeetBaseLogHandler *)handler;
+ (void)removeHandler:(AccessbellMeetBaseLogHandler *)handler;

@end
