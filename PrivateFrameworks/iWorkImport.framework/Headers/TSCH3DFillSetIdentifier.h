/* Runtime dump - TSCH3DFillSetIdentifier
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFillSetIdentifier : NSObject
{
    NSString * _textureSetID;
    int _seriesIndex;
    int _fillPropertyType;
}

@property (readonly, nonatomic) NSString * textureSetID;
@property (readonly, nonatomic) NSString * textureSetFilename;
@property (readonly, nonatomic) unsigned int seriesIndex;

+ (TSCH3DFillSetIdentifier *)instanceWithArchive:(struct Chart3DFillArchive *)arg0 unarchiver:(struct Chart3DFillArchive)arg1;
+ (TSCH3DFillSetIdentifier *)instanceWithDEPRECATEDArchive:(struct DEPRECATEDChart3DFillArchive *)arg0 unarchiver:(struct DEPRECATEDChart3DFillArchive)arg1;
+ (NSObject *)identifierWithFillPropertyType:(int)arg0 seriesIndex:(unsigned int)arg1 textureSetID:(NSString *)arg2;
+ (NSString *)identifierWithFillName:(NSString *)arg0 seriesName:(NSString *)arg1 textureSetID:(NSString *)arg2;
+ (NSDictionary *)identifierWithContentsOfDictionary:(NSDictionary *)arg0;

- (void)didInitFromSOS;
- (void)saveToArchive:(struct Chart3DFillArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCH3DFillSetIdentifier *)initWithArchive:(struct Chart3DFillArchive *)arg0 unarchiver:(struct Chart3DFillArchive)arg1;
- (NSDictionary *)loadPropertiesDictionary;
- (NSString *)textureSetFilename;
- (NSString *)localDirectoryPath;
- (char)isStoredInLocalBundle;
- (NSString *)textureSetID;
- (TSCH3DFillSetIdentifier *)initWithFillName:(NSString *)arg0 seriesName:(NSString *)arg1 textureSetID:(NSString *)arg2;
- (int)fillPropertyTypeFromName:(NSString *)arg0;
- (unsigned int)seriesIndexFromSageSeriesName:(NSString *)arg0;
- (TSCH3DFillSetIdentifier *)initWithFillPropertyType:(int)arg0 seriesIndex:(unsigned int)arg1 textureSetID:(NSString *)arg2;
- (TSCH3DFillSetIdentifier *)initWithContentsOfDictionary:(NSDictionary *)arg0;
- (NSArray *)p_sageFillPropertyNames;
- (NSArray *)p_sageSeriesNames;
- (NSString *)p_plistPath;
- (NSData *)p_plistData;
- (NSDictionary *)p_loadPlist;
- (NSDictionary *)p_getPlist;
- (NSString *)p_version;
- (NSString *)sageFillName;
- (NSString *)sageSeriesName;
- (NSArray *)p_sageFillSetList;
- (char)isSageCompatible;
- (unsigned int)countOfSeriesInFillSet;
- (void)dealloc;
- (TSCH3DFillSetIdentifier *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)seriesIndex;
- (void)setSeriesIndex:(unsigned int)arg0;

@end
