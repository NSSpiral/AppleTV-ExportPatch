/* Runtime dump - SSVURLDataConsumer
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVURLDataConsumer : NSObject

+ (<BWNodeOutputConsumer> *)consumer;

- (NSData *)objectForData:(NSData *)arg0 response:(NSURLResponse *)arg1 error:(id *)arg2;

@end
