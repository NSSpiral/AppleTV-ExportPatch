/* Runtime dump - TSTTableStylePreset
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableStylePreset : TSPObject <TSSPreset, TSSStyleClient, TSKModel>
{
    TSTTableStyleNetwork * _styleNetwork;
    unsigned int _tempUpgradePresetID;
}

@property (readonly, nonatomic) unsigned int presetID;
@property (copy, nonatomic) TSTTableStyleNetwork * styleNetwork;
@property (readonly, nonatomic) NSString * presetKind;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)needsObjectUUID;

- (TSTTableStylePreset *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct TableStylePresetArchive *)arg0 archiver:(NSObject *)arg1;
- (NSArray *)referencedStyles;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)arg0;
- (void)drawSwatchInRect:(struct CGRect)arg0 inContext:(struct CGSize)arg1;
- (NSString *)presetKind;
- (UIImage *)swatchImage;
- (TSTTableStyleNetwork *)styleNetwork;
- (TSTTableStylePreset *)initWithStyleNetwork:(TSTTableStyleNetwork *)arg0;
- (void)setStyleNetwork:(TSTTableStyleNetwork *)arg0;
- (NSObject *)p_documentRoot;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSTTableStylePreset *)initWithContext:(TSPObjectContext *)arg0;
- (unsigned int)presetID;

@end
