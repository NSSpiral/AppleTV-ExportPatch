/* Runtime dump - MFNullDataConsumer
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFNullDataConsumer : NSObject <MFDataConsumer>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)description;
- (void)done;
- (int)appendData:(NSData *)arg0;

@end
