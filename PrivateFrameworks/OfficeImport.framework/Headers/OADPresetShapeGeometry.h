/* Runtime dump - OADPresetShapeGeometry
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADPresetShapeGeometry : OADShapeGeometry
{
    int mType;
}

- (NSString *)description;
- (void)setType:(int)arg0;
- (int)type;
- (NSObject *)equivalentCustomGeometry;
- (NSObject *)oa12EquivalentCustomGeometry;
- (NSObject *)escherEquivalentCustomGeometry;

@end
