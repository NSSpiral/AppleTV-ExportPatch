/* Runtime dump - MFMessageBodyParserObject
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageBodyParserObject : NSObject
{
    double _timeoutTime;
    char _shouldAbort;
    char _didTimeout;
    char _copyBlocks;
    double _timeoutInterval;
}

@property (nonatomic) double timeoutInterval;

- (void)abortParsing;
- (void)copyBlocks;
- (void)messageBodyParserWillBeginParsing:(id)arg0;
- (char)shouldProceedParsing;
- (char)areBlocksCopied;
- (void)setTimeoutInterval:(double)arg0;
- (double)timeoutInterval;

@end
