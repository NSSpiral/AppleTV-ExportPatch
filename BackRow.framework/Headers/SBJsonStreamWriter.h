/* Runtime dump - SBJsonStreamWriter
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class SBJsonStreamWriterState;
@interface SBJsonStreamWriter : NSObject
{
    NSString * error;
    NSMutableArray * stateStack;
    SBJsonStreamWriterState * state;
    <SBJsonStreamWriterDelegate> * delegate;
    unsigned int maxDepth;
    char sortKeys;
    char humanReadable;
}

@property (nonatomic) SBJsonStreamWriterState * state;
@property (readonly, retain, nonatomic) NSMutableArray * stateStack;
@property <SBJsonStreamWriterDelegate> * delegate;
@property unsigned int maxDepth;
@property char humanReadable;
@property char sortKeys;
@property (copy) NSString * error;

+ (void)initialize;

- (void)setMaxDepth:(unsigned int)arg0;
- (char)writeObjectOpen;
- (char)writeValue:(id)arg0;
- (char)writeObjectClose;
- (char)writeArrayOpen;
- (char)writeArrayClose;
- (char)writeObject:(NSObject *)arg0;
- (char)writeArray:(NSArray *)arg0;
- (char)writeNumber:(NSNumber *)arg0;
- (char)writeNull;
- (char)writeBool:(char)arg0;
- (char)humanReadable;
- (void)setHumanReadable:(char)arg0;
- (char)sortKeys;
- (void)setSortKeys:(char)arg0;
- (void)dealloc;
- (void)setDelegate:(<SBJsonStreamWriterDelegate> *)arg0;
- (SBJsonStreamWriter *)init;
- (<SBJsonStreamWriterDelegate> *)delegate;
- (SBJsonStreamWriterState *)state;
- (void)setState:(SBJsonStreamWriterState *)arg0;
- (void)appendBytes:(void *)arg0 length:(void)arg1;
- (void).cxx_destruct;
- (NSString *)error;
- (void)setError:(NSString *)arg0;
- (char)writeString:(NSString *)arg0;
- (NSMutableArray *)stateStack;
- (unsigned int)maxDepth;

@end
