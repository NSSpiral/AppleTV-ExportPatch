/* Runtime dump - TSCH3DLabelResources
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLabelResources : TSCH3DStringIndexedResources
{
    NSMutableDictionary * mCache;
    TSCH3DTextureAtlas * mAtlas;
}

@property (readonly, nonatomic) TSCH3DTextureAtlas * atlas;

- (void)setParagraphStyle:(TSWPParagraphStyle *)arg0 forKey:(unsigned int)arg1 atIndex:(struct tvec2<int> *)arg2;
- (void)setParagraphStyle:(TSWPParagraphStyle *)arg0 atIndex:(struct tvec2<int> *)arg1;
- (NSObject *)resourceAtIndex:(struct tvec2<int> *)arg0 string:(struct tvec2<int>)arg1 bitmapContextInfo:(TSCH3DLabelBitmapContextInfo *)arg2 labelWidth:(float)arg3;
- (id)prepareTextureAtlasWithSamples:(float)arg0;
- (NSString *)paragraphStyleForKey:(unsigned int)arg0 defaultStyle:(VKGenericShieldDrawStyle *)arg1;
- (void)dealloc;
- (TSCH3DLabelResources *)initWithSize:(struct tvec2<int> *)arg0;
- (TSCH3DTextureAtlas *)atlas;

@end
