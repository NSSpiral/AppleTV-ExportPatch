/* Runtime dump - NSCFError
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCFError : NSError

+ (char)automaticallyNotifiesObserversForKey:(NSString *)arg0;

- (NSCFError *)retain;
- (void)release;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (NSString *)domain;
- (int)code;
- (Class)classForCoder;
- (NSDictionary *)userInfo;
- (char)allowsWeakReference;
- (char)retainWeakReference;
- (void)finalize;

@end
