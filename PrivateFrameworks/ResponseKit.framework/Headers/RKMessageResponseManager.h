/* Runtime dump - RKMessageResponseManager
 * Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKMessageResponseManager : NSObject

+ (RKMessageResponseManager *)sharedManager;

- (RKMessageResponseManager *)init;
- (RKMessageResponseManager *)_init;
- (NSString *)responsesForMessage:(NSString *)arg0 maximumResponses:(unsigned int)arg1 forContext:(NSObject *)arg2 withLanguage:(NSString *)arg3 options:(unsigned int)arg4;
- (void)registerResponse:(NSURLResponse *)arg0 forMessage:(NSString *)arg1 forContext:(NSObject *)arg2 withLanguage:(NSString *)arg3;
- (void)resetRegisteredResponsesForContext:(NSObject *)arg0;

@end
