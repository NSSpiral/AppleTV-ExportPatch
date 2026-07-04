/* Runtime dump - OADShapeProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADShapeProperties : OADGraphicProperties
{
    char mIsTextBox;
}

+ (OADShapeProperties *)defaultProperties;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (char)isTextBox;
- (void)setIsTextBox:(char)arg0;

@end
