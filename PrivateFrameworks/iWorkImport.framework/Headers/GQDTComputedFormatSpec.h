/* Runtime dump - GQDTComputedFormatSpec
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDTComputedFormatSpec : NSObject
{
    id mFormat;
}

- (char)isDateFormat;
- (char)isNumberFormat;
- (char)isDurationFormat;
- (void)dealloc;
- (NSString *)format;

@end
