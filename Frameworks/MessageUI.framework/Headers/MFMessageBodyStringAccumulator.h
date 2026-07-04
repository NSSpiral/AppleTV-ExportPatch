/* Runtime dump - MFMessageBodyStringAccumulator
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageBodyStringAccumulator : NSObject <MFMessageBodyStringAccumulator>
{
    NSMutableString * _accumulatedString;
    unsigned int _remainingLength;
    int _options;
    int _lastEntity;
    unsigned int _lastCustomEntityTag;
    char _isFull;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)isFull;
- (void)appendCharacters:(unsigned short *)arg0 length:(unsigned short)arg1;
- (MFMessageBodyStringAccumulator *)initWithOptions:(int)arg0 lengthLimit:(unsigned int)arg1;
- (void)appendInnerTextWithConsumableNode:(NSObject *)arg0;
- (NSMutableString *)accumulatedString;
- (void)appendNewline;
- (void)appendRange:(struct _NSRange)arg0 ofString:(NSString *)arg1;
- (void)appendCustomEntityWithTag:(unsigned int)arg0 stringRepresentation:(NSDictionary *)arg1;
- (void)dealloc;
- (void)appendString:(NSString *)arg0;

@end
