/* Runtime dump - MFPPath
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPPath : NSObject
{
    OITSDBezierPath * mPath;
}

- (void)dealloc;
- (NSString *)path;
- (MFPPath *)initWithPath:(NSString *)arg0;

@end
