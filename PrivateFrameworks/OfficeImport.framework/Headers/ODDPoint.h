/* Runtime dump - ODDPoint
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODDPoint : NSObject
{
    int mType;
    ODDPointPropertySet * mPropertySet;
    OADShapeProperties * mShapeProperties;
    OADTextBody * mText;
}

+ (void)addConnectionToPoint:(NSObject *)arg0 order:(unsigned int)arg1 array:(id *)arg2;

- (void)dealloc;
- (ODDPoint *)init;
- (void)setType:(int)arg0;
- (int)type;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (NSDictionary *)shapeProperties;
- (NSSet *)propertySet;

@end
