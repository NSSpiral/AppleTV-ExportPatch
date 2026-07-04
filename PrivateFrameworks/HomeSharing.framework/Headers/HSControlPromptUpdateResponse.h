/* Runtime dump - HSControlPromptUpdateResponse
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSControlPromptUpdateResponse : HSResponse
{
    unsigned int _nextPromptID;
    HSControlPrompt * _prompt;
    NSDictionary * _promptDictionary;
}

@property (nonatomic) unsigned int nextPromptID;
@property (retain, nonatomic) HSControlPrompt * prompt;
@property (copy, nonatomic) NSDictionary * promptDictionary;

- (HSControlPrompt *)prompt;
- (void)setPrompt:(HSControlPrompt *)arg0;
- (void).cxx_destruct;
- (void)setNextPromptID:(unsigned int)arg0;
- (void)setPromptDictionary:(NSDictionary *)arg0;
- (unsigned int)nextPromptID;
- (NSDictionary *)promptDictionary;

@end
