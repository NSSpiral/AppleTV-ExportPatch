/* Runtime dump - BRVOSpeechAction
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRVOSpeechAction : NSObject
{
    NSString * _string;
    NSString * _pitch;
    NSString * _language;
    char _shouldQueue;
    char _cannotInterrupt;
    id _completionCallback;
}

@property (nonatomic) char shouldQueue;
@property (nonatomic) char cannotInterrupt;
@property (copy, nonatomic) NSString * string;
@property (retain, nonatomic) NSString * pitch;
@property (retain, nonatomic) NSString * language;
@property (copy, nonatomic) id completionCallback;

+ (NSString *)actionWithString:(NSString *)arg0 shouldQueue:(char)arg1;

- (void)dealloc;
- (NSString *)description;
- (NSString *)string;
- (void)setString:(NSString *)arg0;
- (NSString *)language;
- (void)setLanguage:(NSString *)arg0;
- (char)shouldQueue;
- (void)setShouldQueue:(char)arg0;
- (id /* block */)completionCallback;
- (void)setCompletionCallback:(id /* block */)arg0;
- (NSString *)pitch;
- (void)setPitch:(NSString *)arg0;
- (char)cannotInterrupt;
- (void)setCannotInterrupt:(char)arg0;

@end
