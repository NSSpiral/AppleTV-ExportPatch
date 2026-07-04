/* Runtime dump - IKJSBlob
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSBlob : IKJSObject <IKJSBlob>
{
    NSData * _data;
}

@property (readonly, nonatomic) NSData * data;

- (NSData *)data;
- (IKJSBlob *)initWithData:(NSData *)arg0;
- (void).cxx_destruct;

@end
