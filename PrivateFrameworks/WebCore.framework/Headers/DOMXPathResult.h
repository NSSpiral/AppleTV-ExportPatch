/* Runtime dump - DOMXPathResult
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMXPathResult : DOMObject

@property (readonly) unsigned short resultType;
@property (readonly) double numberValue;
@property (readonly, copy) NSString * stringValue;
@property (readonly) char booleanValue;
@property (readonly) DOMNode * singleNodeValue;
@property (readonly) char invalidIteratorState;
@property (readonly) unsigned int snapshotLength;

- (void)dealloc;
- (NSString *)stringValue;
- (void)finalize;
- (unsigned short)resultType;
- (double)numberValue;
- (char)booleanValue;
- (DOMNode *)singleNodeValue;
- (char)invalidIteratorState;
- (unsigned int)snapshotLength;
- (id)iterateNext;
- (NSObject *)snapshotItem:(unsigned int)arg0;

@end
