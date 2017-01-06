#import <React/RCTBridgeModule.h>
#import <React/RCTRootView.h>
#import <OneSignal/OneSignal.h>

@interface RCTOneSignal : NSObject <RCTBridgeModule>

- (id)initWithLaunchOptions:(NSDictionary *)launchOptions appId:(NSString *)appId;
- (id)initWithLaunchOptions:(NSDictionary*)launchOptions appId:(NSString *)appId autoRegister:(BOOL)autoRegister;
+ (void)didReceiveRemoteNotification:(NSDictionary *)dictionary;

@end
