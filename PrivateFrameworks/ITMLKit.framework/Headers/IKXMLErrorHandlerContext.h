/* Runtime dump - IKXMLErrorHandlerContext
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKXMLErrorHandlerContext : NSObject
{
    NSMutableString * _mutableErrorMessages;
    NSMutableSet * _mutableParserErrors;
}

@property (readonly, nonatomic) NSString * errorMessage;
@property (readonly, nonatomic) NSArray * parserErrors;
@property (retain, nonatomic) NSMutableString * mutableErrorMessages;
@property (retain, nonatomic) NSMutableSet * mutableParserErrors;

- (IKXMLErrorHandlerContext *)init;
- (void)clear;
- (void).cxx_destruct;
- (NSString *)errorMessage;
- (NSArray *)parserErrors;
- (NSMutableString *)mutableErrorMessages;
- (NSMutableSet *)mutableParserErrors;
- (void)setMutableErrorMessages:(NSMutableString *)arg0;
- (void)setMutableParserErrors:(NSMutableSet *)arg0;

@end
