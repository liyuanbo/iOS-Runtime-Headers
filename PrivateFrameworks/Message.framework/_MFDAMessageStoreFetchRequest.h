/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class <MFRequestQueueResponseConsumer><DAMailAccountStreamConsumerFactory>, MFDAMessageStore, MFMessage, MFMimePart;

@interface _MFDAMessageStoreFetchRequest : DAMailboxFetchMessageRequest <MFDAMailAccountRequest> {
    boolpartial;
    <MFRequestQueueResponseConsumer><DAMailAccountStreamConsumerFactory> *consumer;
    int format;
    MFMessage *message;
    MFMimePart *part;
    MFDAMessageStore *store;
}

@property(readonly) bool isUserRequested;
@property(readonly) bool shouldSend;

- (id)deferredOperation;
- (unsigned long long)generationNumber;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isUserRequested;
- (bool)shouldSend;

@end