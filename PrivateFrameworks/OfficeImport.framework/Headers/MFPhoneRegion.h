/* Runtime dump - MFPhoneRegion
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPhoneRegion : MFRegion
{
    OITSDBezierPath * m_path;
    struct CGRect m_bounds;
}

- (void)dealloc;
- (void).cxx_construct;
- (int)setClip:(id)arg0 :(int)arg1;
- (int)fill:(id)arg0 :(id)arg1;
- (int)invert:(CoreDAVInvertItem *)arg0;
- (int)frame:(struct CGRect)arg0 :(id)arg1;
- (MFPhoneRegion *)initWithRects:(NSArray *)arg0 :(struct CGRect)arg1 :(struct CGSize)arg2;
- (MFPhoneRegion *)initWithPath:(NSString *)arg0 :(struct CGRect)arg1;

@end
