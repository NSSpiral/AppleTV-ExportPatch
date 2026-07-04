/* Runtime dump - TSCH3DTexturePool
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTexturePool : NSObject

+ (MFSQLiteConnectionPool *)pool;

- (id)resourceForMaterial:(id)arg0;
- (struct TextureCoordinateConverter)coordinateConverterForTexture:(NSObject *)arg0 material:(GLKEffectPropertyMaterial *)arg1;
- (TSCH3DTexturePool *)init;
- (char)isEqual:(NSObject *)arg0;
- (void)add:(int)arg0;

@end
