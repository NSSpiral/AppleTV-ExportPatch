/* Runtime dump - OADShape
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADShape : OADGraphic
{
    OADShapeGeometry * mGeometry;
    OADTextBody * mTextBody;
}

- (void)dealloc;
- (OADShape *)init;
- (NSString *)description;
- (int)type;
- (SCNGeometry *)geometry;
- (void)setGeometry:(TSDInfoGeometry *)arg0;
- (NSDictionary *)shapeProperties;
- (char)isTextBox;
- (NSObject *)textBody;
- (void)setTextBody:(NSObject *)arg0;
- (void)removeUnnecessaryOverrides;
- (void)createPresetGeometryWithShapeType:(int)arg0;
- (void)setParentTextListStyle:(NSObject *)arg0;
- (void)flattenProperties;

@end
