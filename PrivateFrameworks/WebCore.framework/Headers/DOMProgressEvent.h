/* Runtime dump - DOMProgressEvent
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMProgressEvent : DOMEvent

@property (readonly) char lengthComputable;
@property (readonly) unsigned long long loaded;
@property (readonly) unsigned long long total;

- (char)lengthComputable;
- (unsigned long long)loaded;
- (unsigned long long)total;

@end
