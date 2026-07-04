/* Runtime dump - MFRangedDataFilter
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFRangedDataFilter : MFBaseFilterDataConsumer
{
    struct _NSRange _range;
    unsigned int _consumedLength;
}

@property (nonatomic) struct _NSRange range;

+ (MFRangedDataFilter *)rangedFilterWithConsumers:(NSArray *)arg0 range:(struct _NSRange)arg1;
+ (NSObject *)rangedFilterWithConsumer:(NSObject *)arg0 range:(struct _NSRange)arg1;

- (struct _NSRange)range;
- (int)appendData:(NSData *)arg0;
- (void)setRange:(struct _NSRange)arg0;

@end
