/* Runtime dump - UIWebGeolocationPolicyDecider
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebGeolocationPolicyDecider : NSObject
{
    NSMutableDictionary * _sites;
    NSMutableArray * _challenges;
    NSMapTable * _activeChallenges;
}

+ (void)initialize;
+ (UIWebGeolocationPolicyDecider *)sharedPolicyDecider;

- (void)dealloc;
- (UIWebGeolocationPolicyDecider *)init;
- (void)alertView:(UIAlertView *)arg0 clickedButtonAtIndex:(int)arg1;
- (void)webView:(NSObject *)arg0 decidePolicyForGeolocationRequestFromOrigin:(id)arg1 frame:(struct CGRect)arg2 listener:(NSXPCListener *)arg3;
- (id)_siteFileInContainerDirectory:(id)arg0 creatingIntermediateDirectoriesIfNecessary:(char)arg1;
- (NSString *)_siteFile;
- (void)clearCache;
- (char)_isAuthorizationDate:(NSDate *)arg0 inclusivelyBetweenDate:(NSDate *)arg1 andDate:(NSDate *)arg2;
- (void)_save;
- (int)_getChallengeCountFromHistoryForToken:(NSString *)arg0 requestingURL:(NSURL *)arg1;
- (void)_load;
- (void)_executeNextChallenge;
- (void)_decidePolicyForGeolocationRequestFromOrigin:(id)arg0 requestingURL:(NSURL *)arg1 window:(UIWindow *)arg2 listener:(NSXPCListener *)arg3;
- (void)clearAllCaches;
- (void)clearAuthorizationsAddedBetween:(id)arg0 and:(id)arg1;
- (void)decidePolicyForGeolocationRequestFromOrigin:(id)arg0 requestingURL:(NSURL *)arg1 window:(UIWindow *)arg2 listener:(NSXPCListener *)arg3;

@end
