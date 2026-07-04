/* Runtime dump - TDSimpleArtworkRenditionSpec
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDSimpleArtworkRenditionSpec : TDRenditionSpec
{
    struct CGRect _alignmentRect;
    char _allowsMultiPassEncoding;
}

@property (nonatomic) char allowsMultiPassEncoding;
@property (retain, nonatomic) TDPNGAsset * asset;
@property (retain, nonatomic) NSOrderedSet * slices;
@property (nonatomic) struct CGRect alignmentRect;
@property (nonatomic) struct CGRect primitiveAlignmentRect;
@property (retain, nonatomic) NSString * alignmentRectString;

+ (void)initialize;

- (void)_logError:(NSError *)arg0;
- (NSObject *)associatedFileModificationDateWithDocument:(NSObject *)arg0;
- (void)_logExtra:(id)arg0;
- (void)_logWarning:(id)arg0;
- (id)createCSIRepresentationWithCompression:(char)arg0 colorSpaceID:(unsigned int)arg1 document:(NSObject *)arg2;
- (id)_slicesToUseForCSI;
- (void)setAlignmentRect:(struct CGRect)arg0;
- (struct CGRect)primitiveAlignmentRect;
- (void)setPrimitiveAlignmentRect:(struct CGRect)arg0;
- (NSObject *)_sliceRectanglesForRenditionSize:(struct ?)arg0;
- (struct ?)_edgeMetricsForAlignmentRect:(NSObject *)arg0 originalRenditionSize:(NSObject *)arg1 newRenditionSize:(SEL)arg2;
- (char)allowsMultiPassEncoding;
- (void)setAllowsMultiPassEncoding:(char)arg0;
- (struct CGRect)alignmentRect;
- (TDSimpleArtworkRenditionSpec *)initWithEntity:(NSObject *)arg0 insertIntoManagedObjectContext:(NSObject *)arg1;
- (void)awakeFromFetch;

@end
