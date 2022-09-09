# Chapter 1: Introduction to Computer Systems

## 1.4. System Architectures

### 1.4.1. Client/Server Architectures

The first key question is to determine how the client knows how to locate the server. The uniform resource identifier (URI) approach is most common, relying on standard Internet services to fill in the details.

### 1.4.2. Peer-to-peer (P2P) Architectures

### 1.4.3. Layered Architectures

### 1.4.4. Pipe-and-filter Architectures

In contrast to the previous architectures, pipe-and-filter architectures impose a unidirectional ordering on communication between system components. 

One example of such a pipe-and-filter system is a programming language compiler. The source code is passed through a lexical analysis stage to recognize keywords ("if" and "while") and other language components. These tokens are passed to syntax analysis to check for errors, such as forgotten semicolons, or other invalid code...

One significant disadvantage of a pipe-and-filer architecture is the unidirectional structure does not allow for error recovery. Despite this drawback, however, pipe-and-filter architectures are very good for serial data processing.

### 1.4.5. Event-driven Architectures

The events are sent through an event channel, such as an HTTP connection or a wire, where they are received by an event processing component. This component detects the type of event that was triggered and invokes the corresponding event handler to respond accordingly.

### 1.4.6. Hybrid Architectures

## 1.5. State Models in UML

