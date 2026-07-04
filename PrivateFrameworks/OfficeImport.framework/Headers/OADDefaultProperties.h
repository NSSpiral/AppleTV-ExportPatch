/* Runtime dump - OADDefaultProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADDefaultProperties : NSObject
{
    OADShapeProperties * mShapeProperties;
    OADTextBodyProperties * mTextBodyProperties;
    OADTextListStyle * mTextListStyle;
}

- (void)dealloc;
- (OADDefaultProperties *)init;
- (NSDictionary *)shapeProperties;
- (NSDictionary *)textBodyProperties;
- (NSObject *)textListStyle;
- (OADDefaultProperties *)initWithDefaults;
- (void)setShapeProperties:(NSDictionary *)arg0;
- (void)setTextBodyProperties:(NSDictionary *)arg0;
- (void)setTextListStyle:(NSObject *)arg0;

@end
