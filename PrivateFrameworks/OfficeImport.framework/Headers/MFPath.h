/* Runtime dump - MFPath
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPath : NSObject <NSCopying>

- (int)state;
- (MFPath *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGPoint)currentPoint;
- (int)begin;
- (int)end;
- (char)isOpen;
- (int)stroke:(TSDStroke *)arg0;
- (int)flatten;
- (int)closeFigure;
- (int)widen:(id)arg0;
- (int)fill:(id)arg0;
- (int)abort;

@end
