/* Runtime dump - MFLineEndingConverterFilter
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFLineEndingConverterFilter : MFBaseFilterDataConsumer
{
    char _lastCR;
}

- (void)done;
- (int)appendData:(NSData *)arg0;

@end
