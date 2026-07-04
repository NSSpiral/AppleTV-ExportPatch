/* Runtime dump - WMFieldMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMFieldMapper : WMParagraphMapper
{
    int mMode;
    unsigned int mType;
    NSMutableString * mMarkerText;
    NSString * mLink;
}

- (void)dealloc;
- (void)mapRunAt:(id)arg0 run:(id)arg1 withState:(NSObject *)arg2;
- (WMFieldMapper *)initWithWDFieldMarker:(NSObject *)arg0 parent:(NSObject *)arg1;
- (void)mapFieldMarkerAt:(id)arg0 marker:(VKAnnotationMarker *)arg1 withState:(NSObject *)arg2;

@end
