/* Runtime dump - CUIThemeSchemaLayer
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIThemeSchemaLayer : NSObject
{
    NSArray * _renditions;
    NSString * _name;
    unsigned int _index;
}

@property (retain, nonatomic) NSArray * renditions;
@property (retain, nonatomic) NSString * name;
@property (nonatomic) unsigned int index;

+ (CUIThemeSchemaLayer *)layerWithRenditions:(NSArray *)arg0 name:(NSString *)arg1 index:(unsigned int)arg2;

- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg0;
- (NSArray *)renditions;
- (void)setRenditions:(NSArray *)arg0;
- (void)calculateColumLefts:(id *)arg0 rowTops:(id *)arg1 totalSize:(struct CGSize *)arg2 forPartFeatures:(unsigned int)arg3;
- (CUIThemeSchemaLayer *)initWithRenditions:(NSArray *)arg0 name:(NSString *)arg1 index:(unsigned int)arg2;
- (float)translateFromWidthsOrHeightsToLeftsOrTops:(id)arg0 leftsOrTops:(id *)arg1;

@end
