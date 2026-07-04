/* Runtime dump - MFConverter
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFConverter : NSObject

+ (MFConverter *)play:(NSData *)arg0 frame:(struct CGRect)arg1 colorMap:(struct CGSize)arg2 fillMap:(NSObject *)arg3;
+ (char)mapToPdf:(id)arg0;
+ (MFConverter *)playToPDF:(id)arg0 frame:(struct CGRect)arg1 colorMap:(struct CGSize)arg2 fillMap:(NSObject *)arg3;
+ (MFConverter *)playToBitmap:(id)arg0 frame:(struct CGRect)arg1 colorMap:(struct CGSize)arg2 fillMap:(NSObject *)arg3;
+ (void)fromBinary:(struct __sFILE *)arg0 toXml:(id)arg1;
+ (void)playInCurrentContext:(NSObject *)arg0 frame:(struct CGRect)arg1 colorMap:(struct CGSize)arg2 fillMap:(NSObject *)arg3;
+ (struct CGRect)boundsInLogicalUnits:(id)arg0;
+ (struct CGRect)boundsInPoints:(id)arg0;

@end
