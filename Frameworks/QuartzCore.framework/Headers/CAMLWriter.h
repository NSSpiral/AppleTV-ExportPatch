/* Runtime dump - CAMLWriter
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAMLWriter : NSObject
{
    struct _CAMLWriterPriv * _priv;
}

@property (retain) NSURL * baseURL;
@property (weak) id delegate;

+ (NSData *)writerWithData:(NSData *)arg0;

- (void)setElementAttribute:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)beginPropertyElement:(NSObject *)arg0;
- (void)beginElement:(unsigned int)arg0;
- (void)setElementContent:(NSObject *)arg0;
- (NSObject *)URLStringForResource:(NSObject *)arg0;
- (void)_writeElementTree:(struct _CAMLWriterElement *)arg0;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (CAMLWriter *)initWithData:(NSData *)arg0;
- (NSURL *)baseURL;
- (void)setBaseURL:(NSURL *)arg0;
- (void)encodeObject:(NSObject *)arg0;
- (void)endElement;

@end
