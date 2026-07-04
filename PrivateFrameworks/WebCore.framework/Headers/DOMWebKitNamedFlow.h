/* Runtime dump - DOMWebKitNamedFlow
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMWebKitNamedFlow : DOMObject

@property (readonly, copy) NSString * name;
@property (readonly) char overset;
@property (readonly) int firstEmptyRegionIndex;

- (void)dealloc;
- (NSString *)name;
- (void)finalize;
- (void)addEventListener:(NetflixNrdObjectCallback *)arg0 listener:(NSXPCListener *)arg1 useCapture:(char)arg2;
- (void)removeEventListener:(NetflixNrdObjectCallback *)arg0 listener:(NSXPCListener *)arg1 useCapture:(char)arg2;
- (char)dispatchEvent:(NSObject *)arg0;
- (char)overset;
- (int)firstEmptyRegionIndex;
- (NSObject *)getRegionsByContent:(NSObject *)arg0;
- (id)getRegions;
- (NSObject *)getContent;

@end
