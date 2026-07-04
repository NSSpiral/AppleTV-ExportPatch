/* Runtime dump - PQLNameInjectionBase
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface PQLNameInjectionBase : NSData
{
    unsigned int _length;
    char * _bytes;
}

@property (readonly, nonatomic) NSData * sql;

- (void)dealloc;
- (unsigned int)length;
- (void *)bytes;
- (PQLNameInjectionBase *)initWithData:(NSData *)arg0;
- (PQLNameInjectionBase *)initWithBytes:(void *)arg0 length:(void)arg1;
- (NSData *)sql;

@end
