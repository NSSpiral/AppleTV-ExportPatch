/* Runtime dump - OAVFill
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAVFill : NSObject

+ (NSObject *)targetFgColorWithManager:(NSObject *)arg0;
+ (void)readGradientFill:(id)arg0 fromManager:(NSObject *)arg1;
+ (NSObject *)readBlipRefFromManager:(NSObject *)arg0 state:(NSObject *)arg1;
+ (NSObject *)targetBgColorWithManager:(NSObject *)arg0;
+ (NSObject *)readFromManager:(NSObject *)arg0 state:(NSObject *)arg1;
+ (void)addStopsFromArray:(struct OAVGradientStop *)arg0 stopCount:(struct OAVGradientStop)arg1 inverted:(int)arg2 startPos:(char)arg3 endPos:(float)arg4 toGradientFill:(float)arg5 manager:(NSObject *)arg6;
+ (void)readImageFill:(id)arg0 fromManager:(NSObject *)arg1 state:(NSObject *)arg2;

@end
