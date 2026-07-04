/* Runtime dump - OADImage
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADImage : OADGraphic
{
    OADShapeGeometry * mGeometry;
    OADOle * mOle;
    OADMovie * mMovie;
}

- (void)dealloc;
- (OADImage *)init;
- (NSString *)description;
- (SCNGeometry *)geometry;
- (void)setGeometry:(TSDInfoGeometry *)arg0;
- (void)setMovie:(SAMovieMovie *)arg0;
- (MIPMovie *)movie;
- (OADImage *)initWithBlipRef:(OADBlipRef *)arg0;
- (id)ole;
- (void)setOle:(id)arg0;
- (id)createImageFill;
- (void)createPictureFramePresetGeometry;
- (void)setParentTextListStyle:(NSObject *)arg0;
- (NSDictionary *)imageProperties;

@end
