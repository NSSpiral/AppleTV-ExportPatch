/* Runtime dump - OABBlip
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OABBlip : NSObject

+ (OABBlip *)readBlipFromEshBlip:(struct EshBlip *)arg0;
+ (NSDictionary *)delayedSubBlipWithMetafileInfo:(struct EshMetafileBlipInfo *)arg0;
+ (void)setMetafileBoundsFromPictData:(NSData *)arg0 info:(struct EshMetafileBlipInfo *)arg1;
+ (NSData *)compressMetafileData:(NSData *)arg0 info:(struct EshMetafileBlipInfo *)arg1;
+ (void)writeEmptyBlipStoreEntry:(struct EshBSE *)arg0;
+ (struct EshBlip *)writeBlip:(id)arg0;
+ (OABBlip *)readBlipFromBse:(id)arg0;
+ (void)writeBlip:(id)arg0 toBlipStoreEntry:(struct EshBSE *)arg1;
+ (int)blipTypeForBlipSignature:(int)arg0;
+ (NSData *)dibFileContentsWithDibBlipData:(struct OcBinaryData *)arg0;
+ (NSDictionary *)subBlipWithMetafileInfo:(struct EshMetafileBlipInfo *)arg0;

@end
