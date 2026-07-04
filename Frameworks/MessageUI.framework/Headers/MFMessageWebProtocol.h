/* Runtime dump - MFMessageWebProtocol
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageWebProtocol : NSURLProtocol

+ (char)requestIsCacheEquivalent:(id)arg0 toRequest:(NSURLRequest *)arg1;
+ (char)canInitWithRequest:(NSURLRequest *)arg0;
+ (void)unregisterFragmentsForUUID:(id)arg0;
+ (void)registerFragments:(id)arg0 forUUID:(NSUUID *)arg1;
+ (void)initialize;
+ (NSURLRequest *)canonicalRequestForRequest:(NSURLRequest *)arg0;

- (void)startLoading;
- (void)dealloc;
- (void)stopLoading;

@end
