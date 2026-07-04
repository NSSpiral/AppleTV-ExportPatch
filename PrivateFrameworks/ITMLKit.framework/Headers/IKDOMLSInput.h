/* Runtime dump - IKDOMLSInput
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMLSInput : IKJSObject <IKJSDOMLSInput>
{
    char _certifiedText;
    id _byteStream;
    NSString * _stringData;
    NSString * _encoding;
}

@property (retain, nonatomic) id byteStream;
@property (retain, nonatomic) NSString * stringData;
@property (retain, nonatomic) NSString * encoding;
@property (nonatomic) char certifiedText;

- (void).cxx_destruct;
- (void)setStringData:(NSString *)arg0;
- (NSString *)stringData;
- (NSObject *)byteStream;
- (void)setByteStream:(NSObject *)arg0;
- (char)certifiedText;
- (void)setCertifiedText:(char)arg0;
- (NSString *)encoding;
- (void)setEncoding:(NSString *)arg0;

@end
