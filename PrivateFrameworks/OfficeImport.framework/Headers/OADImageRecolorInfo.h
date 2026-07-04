/* Runtime dump - OADImageRecolorInfo
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADImageRecolorInfo : NSObject
{
    NSDictionary * mColors;
    NSDictionary * mFills;
}

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSArray *)colors;
- (OADImageRecolorInfo *)initWithColors:(NSArray *)arg0 fills:(id)arg1;
- (id)fills;

@end
