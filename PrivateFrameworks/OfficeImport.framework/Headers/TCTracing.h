/* Runtime dump - TCTracing
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCTracing : NSObject
{
    NSString * mFilename;
}

- (void)dealloc;
- (TCTracing *)initWithFilename:(NSString *)arg0;
- (void)writeHeader;

@end
