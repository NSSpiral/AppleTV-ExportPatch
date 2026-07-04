/* Runtime dump - VKDrawStyle
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKDrawStyle : NSObject
{
    VKCartoStyle * _sourceStyle;
    struct StyleData _internal;
    VKStyleManager * _styleManager;
}

@property (readonly, nonatomic) id variant;
@property (readonly, nonatomic) float blendingFactor;

+ (int)renderStyleID;

- (void).cxx_construct;
- (void).cxx_destruct;
- (float)blendingFactor;
- (VKCartoStyle *)variant;
- (VKDrawStyle *)initWithStyle:(NSObject *)arg0 manager:(NSObject *)arg1;
- (VKCartoStyle *)sourceStyle;
- (void)clearSourceStyle;
- (NSString *)styleName;
- (void)takeFromZoomInvariantProperties:(NSDictionary *)arg0;
- (void)takeFromStyleProperties:(NSDictionary *)arg0 atZoom:(unsigned int)arg1 globals:(GKSessionGlobals *)arg2;

@end
