/* Runtime dump - TSWPStorageIterator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStorageIterator : NSObject
{
    TSWPStorage * _storage;
    unsigned int _charIndex;
    unsigned int _startCharIndex;
    NSMutableArray * _rangeProviders;
    NSMutableArray * _locationProviders;
    NSMutableArray * _pendingEvents;
    char _sendEventsForNilObjects;
    char _lastEventWasMarker;
    NSCharacterSet * _markers;
}

@property (retain, nonatomic) NSCharacterSet * markers;

- (TSWPStorageIterator *)initWithStorage:(TSWPStorage *)arg0;
- (void)addRangeProvider:(NSObject *)arg0;
- (void)p_emitPendingCharactersAndEvent:(NSObject *)arg0;
- (void)p_emitEventWithType:(int)arg0 provider:(NSObject *)arg1 range:(struct _NSRange)arg2 object:(NSObject *)arg3;
- (void)p_emitEventForMarkerCharacter:(unsigned short)arg0 atIndex:(unsigned int)arg1;
- (void)p_forceRangeEndForProvider:(NSObject *)arg0 providerIndex:(unsigned int)arg1 atCharIndex:(unsigned int)arg2;
- (void)addAttributeRangeProvider:(int)arg0;
- (void)addLocationProvider:(NSObject *)arg0;
- (NSObject *)nextEvent;
- (NSCharacterSet *)markers;
- (void)setMarkers:(NSCharacterSet *)arg0;
- (void)dealloc;
- (NSString *)description;

@end
