#import <UIKit/UIKit.h>
#import <StoreKit/StoreKit.h>

#define XAppDelegate ((AppController*)[[UIApplication sharedApplication] delegate])

@class RootViewController;

@interface AppController : NSObject <UIApplicationDelegate> {
//    UIWindow *window;
    int countFBLogin;
}

@property(nonatomic, readonly) RootViewController* viewController;
@property(nonatomic, retain) UIWindow * window;

-(void) setCrashlyticsWithKey:(NSString*) key andValue:(NSString*) value;
-(void) showAppInbox;
-(void) initAppInbox;

@end

