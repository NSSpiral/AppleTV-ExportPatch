/* Runtime dump - MFPhonePath
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPhonePath : MFPath
{
    OITSDBezierPath * m_path;
    int m_state;
}

- (void)dealloc;
- (MFPhonePath *)init;
- (int)state;
- (MFPhonePath *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGPoint)currentPoint;
- (int)begin;
- (int)end;
- (char)isOpen;
- (int)stroke:(TSDStroke *)arg0;
- (int)flatten;
- (int)closeFigure;
- (int)widen:(id)arg0;
- (int)fill:(id)arg0;
- (MFPhonePath *)initWithPath:(NSString *)arg0 state:(int)arg1;
- (void)appendBezierPath:(NSString *)arg0 dc:(id)arg1;
- (NSString *)getBezierPath;
- (int)abort;

@end
