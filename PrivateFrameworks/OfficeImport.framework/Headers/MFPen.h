/* Runtime dump - MFPen
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPen : NSObject <MFObject>
{
    int m_penStyle;
    int m_penWidth;
    OITSUColor * m_colour;
    double * m_userStyleArray;
}

+ (NSObject *)penWithStyle:(int)arg0 width:(int)arg1 colour:(id)arg2 styleArray:(double *)arg3;
+ (MFPen *)pen;

- (void)dealloc;
- (MFPen *)init;
- (int)selectInto:(MFDeviceContext *)arg0;
- (int)getWidth;
- (MFPen *)initWithStyle:(int)arg0 width:(int)arg1 colour:(id)arg2 styleArray:(double *)arg3;
- (int)getStyle;
- (UIColor *)getColor;

@end
